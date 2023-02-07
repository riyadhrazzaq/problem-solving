public class Dict {
    // an entry of the map
    public record Entry(String k, Integer v) {}

    private int bucket = 5;
    public Entry[] table = new Entry[bucket];

    // open adressing
    private int hash(String k, int offset) {
        int sum = k.chars().sum();
        return (sum + offset) % this.bucket;
    }

    public void put(String k, Integer v) throws Exception {
        int offset = 0;
        int idx = -1;
        while (offset < bucket) {
            idx = hash(k, offset);
            if (this.table[idx] == null || this.table[idx].k().equals(k)) {
                table[idx] = new Entry(k, v);
                return;
            }
            offset++;
        }

        throw new Exception("Overflow");
    }

    public Integer get(String k) {
        int offset = 0;
        int idx = -1;
        while (offset < bucket) {
            idx = hash(k, offset);
            if (this.table[idx] == null) return null;
            else if (this.table[idx].k().equals(k)) {
                return this.table[idx].v();
            }
            offset++;
        }

        return null;
    }

    private void printf(String format, Object... params) {
        System.out.println(String.format(format, (Object[]) params));
    }

    public <T extends Object> String toString(Iterable<T> iterable) {
        StringBuilder sb = new StringBuilder("[");
        for (T t : iterable) {
            sb.append(t).append(", ");
        }
        sb.deleteCharAt(sb.length() - 1);
        sb.deleteCharAt(sb.length() - 1);
        sb.append("]");
        return sb.toString();
    }

    public static void main(String[] args) throws Exception {
        Dict d = new Dict();
        d.put("s", 3);
        System.out.println(d.get("s"));
        System.out.println(d.get("ss"));
        d.put("HelloWorld", 100);
        d.put("HelloWorld", 101);
        System.out.println(d.get("HelloWorld"));
        d.put("ss", 33);
        System.out.println(d.get("ss"));
        d.put("ss3", 3344);
        System.out.println(d.get("ss3"));
        d.put("ss4", 344);
        System.out.println(d.get("ss4"));
        d.put("ss_", 333333);
    }
}
