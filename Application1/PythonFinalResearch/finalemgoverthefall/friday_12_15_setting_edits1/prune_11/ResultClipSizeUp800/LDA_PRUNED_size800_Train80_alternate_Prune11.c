// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.54%
// test_accuracy: 72.50%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_29.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_26.txt', 'act2\\trial_40.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 13:16:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.677559, 0.677557,
    0.158301, -0.158336,
    0.819399, -0.819359,
    0.384465, -0.384454,
    -0.624871, 0.624907,
    0.227817, -0.227849,
    0.019222, -0.019224,
    0.187614, -0.187608,
    0.412337, -0.412165,
    -0.544509, 0.544232,
    -0.310902, 0.310990,
    0.470354, -0.470331,
};

float Cg_init[2] = {
    -0.406099, -0.406073
};

float xstd_init[12] = {
    0.003873, 0.001599, 0.330065, 0.121608, 0.001101, 0.000198, 0.051694, 0.129495, 0.000641, 0.000164, 0.048725, 0.135047
};

float xmean_init[12] = {
    0.010066, -0.005878, 0.426136, 1.036698, 0.003398, -0.007759, 0.013228, 0.614666, 0.003487, -0.007739, 0.013545, 0.696889
};

