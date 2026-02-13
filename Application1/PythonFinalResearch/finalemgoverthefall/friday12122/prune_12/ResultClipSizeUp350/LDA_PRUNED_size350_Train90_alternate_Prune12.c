// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 89.93%
// test_accuracy: 77.08%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_36.txt']}
// generated: 2025-12-12 16:08:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.772650, 0.772642,
    -0.558581, 0.558554,
    0.515480, -0.515495,
    1.004630, -1.004598,
    1.146868, -1.146895,
    -1.766979, 1.767030,
    0.352144, -0.352146,
    -0.041263, 0.041254,
    0.954505, -0.954592,
    -0.240079, 0.240313,
    -0.666316, 0.666248,
    0.234497, -0.234589,
};

float Cg_init[2] = {
    -0.740894, -0.740908
};

float xstd_init[12] = {
    0.004049, 0.001515, 0.101769, 0.173886, 0.001784, 0.000557, 0.033699, 0.091898, 0.000547, 0.000090, 0.020783, 0.064358
};

float xmean_init[12] = {
    0.009989, -0.006204, 0.166667, 0.573194, 0.003343, -0.007680, 0.008981, 0.055833, 0.003124, -0.007808, 0.005370, 0.067083
};

