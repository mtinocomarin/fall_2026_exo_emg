// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 79.17%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_18.txt', 'act1\\trial_12.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_4.txt']}
// generated: 2025-12-17 14:40:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.621293, 2.621285,
    0.790482, -0.790427,
    -0.588680, 0.588663,
    0.300629, -0.300654,
    -0.038750, 0.038740,
    -1.271742, 1.271770,
    -0.206843, 0.206844,
    0.469085, -0.469081,
    0.195462, -0.195509,
    -0.205632, 0.205682,
    0.653652, -0.653660,
    0.463750, -0.463763,
};

float Cg_init[2] = {
    -0.935583, -0.935584
};

float xstd_init[12] = {
    0.000879, 0.000146, 0.019380, 0.106395, 0.002900, 0.001030, 0.090437, 0.142093, 0.001127, 0.000213, 0.033540, 0.114867
};

float xmean_init[12] = {
    0.005813, -0.007638, 0.011111, 0.186111, 0.010395, -0.006334, 0.156296, 0.581111, 0.005007, -0.007543, 0.029259, 0.243333
};

