// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.17%
// test_accuracy: 66.00%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_10.txt', 'act2\\trial_8.txt', 'act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_20.txt', 'act1\\trial_13.txt', 'act1\\trial_15.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt', 'act1\\trial_16.txt']}
// generated: 2025-12-17 18:09:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.072057, 1.072159,
    1.387359, -1.387665,
    -0.278369, 0.278451,
    -0.390065, 0.390135,
    1.258856, -1.258821,
    -0.491476, 0.491535,
    -1.179434, 1.179490,
    -0.661282, 0.661232,
    1.770858, -1.770850,
    -2.351132, 2.351124,
    1.091947, -1.091961,
    0.714372, -0.714361,
};

float Cg_init[2] = {
    -0.800904, -0.800932
};

float xstd_init[12] = {
    0.001144, 0.000145, 0.029191, 0.094228, 0.002597, 0.000692, 0.054868, 0.138984, 0.004841, 0.001697, 0.141222, 0.236290
};

float xmean_init[12] = {
    0.005609, -0.007705, 0.010444, 0.135333, 0.004100, -0.007587, 0.021111, 0.113333, 0.011329, -0.006068, 0.161778, 0.522333
};

