// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.09%
// test_accuracy: 59.38%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 13:46:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.883573, 0.883557,
    0.194494, -0.194463,
    0.157565, -0.157567,
    0.044287, -0.044312,
    -0.568744, 0.568772,
    -0.159877, 0.159856,
    0.369102, -0.369106,
    -0.123253, 0.123233,
    -1.089248, 1.089173,
    0.517543, -0.517403,
    -0.149583, 0.149539,
    0.364905, -0.364944,
};

float Cg_init[2] = {
    -0.425304, -0.425290
};

float xstd_init[12] = {
    0.001044, 0.000083, 0.011471, 0.081872, 0.002880, 0.000811, 0.080609, 0.168770, 0.000877, 0.000120, 0.017598, 0.071931
};

float xmean_init[12] = {
    0.006498, -0.007685, 0.004444, 0.143636, 0.008686, -0.006839, 0.101515, 0.446061, 0.004331, -0.007717, 0.008283, 0.129697
};

