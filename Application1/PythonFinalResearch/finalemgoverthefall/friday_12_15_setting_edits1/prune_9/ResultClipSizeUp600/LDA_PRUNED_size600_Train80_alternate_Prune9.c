// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.02%
// test_accuracy: 73.86%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:15:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.651034, 0.651006,
    0.175975, -0.175994,
    0.624034, -0.624004,
    0.462205, -0.462204,
    -0.761406, 0.761459,
    0.248000, -0.248047,
    0.073139, -0.073136,
    0.353780, -0.353768,
    0.084204, -0.084049,
    -0.203080, 0.202864,
    -0.394220, 0.394279,
    0.322407, -0.322396,
};

float Cg_init[2] = {
    -0.373359, -0.373348
};

float xstd_init[12] = {
    0.004185, 0.001772, 0.334642, 0.122159, 0.001214, 0.000217, 0.055612, 0.133135, 0.000682, 0.000175, 0.050181, 0.141398
};

float xmean_init[12] = {
    0.010226, -0.005789, 0.432278, 1.033123, 0.003475, -0.007745, 0.015283, 0.614940, 0.003532, -0.007728, 0.016469, 0.700633
};

