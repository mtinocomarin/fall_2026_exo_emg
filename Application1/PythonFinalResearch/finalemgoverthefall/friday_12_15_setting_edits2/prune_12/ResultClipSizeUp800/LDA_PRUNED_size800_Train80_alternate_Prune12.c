// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.33%
// test_accuracy: 65.83%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_39.txt', 'act1\\trial_13.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 12:41:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.840564, 0.840632,
    0.370647, -0.370702,
    0.613707, -0.613759,
    0.745622, -0.745616,
    -0.539411, 0.539312,
    0.251280, -0.251153,
    -0.113164, 0.113167,
    -0.025053, 0.025018,
    0.366519, -0.366366,
    -0.072026, 0.071719,
    -0.725524, 0.725609,
    -0.068852, 0.068942,
};

float Cg_init[2] = {
    -0.433914, -0.433921
};

float xstd_init[12] = {
    0.003840, 0.001646, 0.150565, 0.206860, 0.001097, 0.000192, 0.028767, 0.080903, 0.000685, 0.000174, 0.030738, 0.109566
};

float xmean_init[12] = {
    0.010174, -0.005799, 0.248934, 0.689667, 0.003424, -0.007759, 0.009733, 0.078734, 0.003545, -0.007725, 0.013733, 0.125600
};

