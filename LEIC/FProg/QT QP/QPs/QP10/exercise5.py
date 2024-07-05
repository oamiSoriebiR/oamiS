"""def transitive_closure(r):
    closure = set(r)

    def transitive_closure_helper(closure):
        new_relations = set((x, w) for x, y in closure for q, w in closure if q == y)
        closure_until_now = closure | new_relations

        if closure_until_now == closure:
            return closure

        return transitive_closure_helper(closure_until_now)

    return transitive_closure_helper(closure)"""

def transitive_closure(r): return set(r) if (closure := set(r)) == (closure_until_now := closure | set((x, w) for x, y in closure for q, w in closure if q == y)) else transitive_closure(closure_until_now)
