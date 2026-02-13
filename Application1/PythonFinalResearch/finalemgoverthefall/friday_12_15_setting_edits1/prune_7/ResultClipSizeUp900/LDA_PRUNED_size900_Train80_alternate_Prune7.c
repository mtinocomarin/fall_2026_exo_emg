// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.41%
// test_accuracy: 70.59%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 13:14:42
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.649966, 0.649984,
    0.078619, -0.078644,
    0.726732, -0.726741,
    0.259898, -0.259890,
    -0.496819, 0.496836,
    0.226438, -0.226460,
    0.016816, -0.016810,
    0.165558, -0.165552,
    0.283143, -0.283029,
    -0.353213, 0.353045,
    -0.283376, 0.283423,
    0.352090, -0.352071,
};

float Cg_init[2] = {
    -0.266180, -0.266174
};

float xstd_init[12] = {
    0.003977, 0.001728, 0.339854, 0.122374, 0.000982, 0.000174, 0.044994, 0.130614, 0.000640, 0.000156, 0.047342, 0.135968
};

float xmean_init[12] = {
    0.010085, -0.005832, 0.427295, 1.038823, 0.003335, -0.007771, 0.010039, 0.617270, 0.003510, -0.007737, 0.013882, 0.695106
};

