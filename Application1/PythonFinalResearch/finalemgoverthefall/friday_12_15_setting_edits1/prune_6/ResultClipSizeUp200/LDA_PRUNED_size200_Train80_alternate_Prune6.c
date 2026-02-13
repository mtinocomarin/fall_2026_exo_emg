// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.74%
// test_accuracy: 89.58%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:13:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.290621, 1.290640,
    0.274486, -0.274496,
    0.981344, -0.981340,
    0.612914, -0.612918,
    -0.253633, 0.253747,
    -0.034205, 0.034085,
    -0.050878, 0.050880,
    0.314844, -0.314832,
    -0.123983, 0.123863,
    -0.098324, 0.098493,
    -0.367020, 0.366974,
    0.174187, -0.174196,
};

float Cg_init[2] = {
    -0.537478, -0.537482
};

float xstd_init[12] = {
    0.004414, 0.002023, 0.332889, 0.109882, 0.001564, 0.000288, 0.073033, 0.145103, 0.000680, 0.000159, 0.043747, 0.156606
};

float xmean_init[12] = {
    0.011245, -0.005418, 0.469658, 1.046667, 0.003641, -0.007715, 0.019231, 0.630769, 0.003597, -0.007725, 0.016239, 0.696666
};

