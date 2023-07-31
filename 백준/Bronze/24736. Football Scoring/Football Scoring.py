def calc_score(ts):
    T, F, S, P, C = map(int, ts)
    total_score = (T * 6) + (F * 3) + (S * 2) + (P * 1) + (C * 2)
    return total_score

if __name__ == "__main__":
    vt_scores = input().split()
    ht_scores = input().split()

    vt_score = calc_score(vt_scores)
    ht_score = calc_score(ht_scores)

    print(vt_score, ht_score)
