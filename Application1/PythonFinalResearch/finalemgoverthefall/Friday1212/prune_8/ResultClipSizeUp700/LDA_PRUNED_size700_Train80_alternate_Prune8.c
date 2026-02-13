// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.90%
// test_accuracy: 72.60%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 15:50:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.597636, 0.597665,
    -0.396365, 0.396363,
    0.408806, -0.408848,
    0.643862, -0.643850,
    0.976804, -0.976735,
    -0.825703, 0.825619,
    -0.298726, 0.298742,
    -0.094706, 0.094704,
    0.764867, -0.764741,
    -0.151782, 0.151446,
    -0.348660, 0.348795,
    0.067353, -0.067258,
};

float Cg_init[2] = {
    -0.494690, -0.494678
};

float xstd_init[12] = {
    0.003812, 0.001433, 0.107494, 0.171195, 0.001256, 0.000383, 0.019996, 0.069127, 0.000514, 0.000078, 0.016083, 0.060492
};

float xmean_init[12] = {
    0.009892, -0.006181, 0.181924, 0.597564, 0.003046, -0.007766, 0.005085, 0.046859, 0.003092, -0.007814, 0.004188, 0.061731
};

