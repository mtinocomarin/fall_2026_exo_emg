// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 78.79%
// test_accuracy: 77.78%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:03:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.735548, 0.735494,
    -0.164412, 0.164427,
    0.372326, -0.372346,
    0.677227, -0.677199,
    0.680107, -0.680122,
    -0.940199, 0.940279,
    0.047239, -0.047266,
    0.048401, -0.048451,
    -0.383618, 0.383425,
    0.427385, -0.426794,
    -0.401098, 0.400892,
    0.158620, -0.158893,
};

float Cg_init[2] = {
    -0.302622, -0.302592
};

float xstd_init[12] = {
    0.003850, 0.001425, 0.102480, 0.166044, 0.001555, 0.000461, 0.026375, 0.077390, 0.001463, 0.000087, 0.016359, 0.065261
};

float xmean_init[12] = {
    0.009831, -0.006250, 0.167677, 0.579260, 0.003176, -0.007730, 0.006554, 0.049024, 0.003215, -0.007809, 0.004489, 0.067340
};

