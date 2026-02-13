// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.04%
// test_accuracy: 75.00%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-12 13:15:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.714509, 1.714520,
    0.612508, -0.612508,
    1.138158, -1.138166,
    0.311372, -0.311368,
    0.233256, -0.233200,
    -0.354900, 0.354837,
    -0.140921, 0.140922,
    0.241944, -0.241938,
    -0.299000, 0.298923,
    -0.279641, 0.279747,
    0.012114, -0.012149,
    0.361509, -0.361512,
};

float Cg_init[2] = {
    -0.482040, -0.482042
};

float xstd_init[12] = {
    0.004600, 0.002089, 0.346153, 0.119894, 0.001499, 0.000286, 0.061976, 0.145929, 0.000680, 0.000171, 0.052498, 0.146868
};

float xmean_init[12] = {
    0.011077, -0.005528, 0.463768, 1.042826, 0.003627, -0.007717, 0.019565, 0.638261, 0.003569, -0.007727, 0.015942, 0.702826
};

