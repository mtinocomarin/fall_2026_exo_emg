// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.04%
// test_accuracy: 56.25%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:43:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.332528, 0.332532,
    0.204379, -0.204397,
    0.108593, -0.108589,
    -0.157189, 0.157194,
    -0.587956, 0.587987,
    -0.058132, 0.058128,
    0.137394, -0.137419,
    0.302946, -0.302950,
    -0.472815, 0.472818,
    0.157058, -0.157042,
    -0.030783, 0.030781,
    0.196442, -0.196463,
};

float Cg_init[2] = {
    -0.150863, -0.150868
};

float xstd_init[12] = {
    0.001007, 0.000078, 0.011357, 0.079117, 0.002953, 0.000807, 0.086885, 0.177548, 0.000831, 0.000106, 0.017244, 0.072783
};

float xmean_init[12] = {
    0.006430, -0.007691, 0.004074, 0.142619, 0.008693, -0.006845, 0.105344, 0.444683, 0.004315, -0.007721, 0.008942, 0.125238
};

