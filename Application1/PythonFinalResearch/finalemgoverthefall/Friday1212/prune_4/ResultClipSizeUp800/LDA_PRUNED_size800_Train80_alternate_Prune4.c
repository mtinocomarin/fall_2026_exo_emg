// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.55%
// test_accuracy: 75.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.521019, 0.521032,
    -0.349115, 0.349132,
    0.349476, -0.349528,
    0.534100, -0.534077,
    0.711694, -0.711753,
    -0.835501, 0.835602,
    -0.032874, 0.032848,
    -0.036286, 0.036268,
    0.630046, -0.629971,
    -0.100555, 0.100403,
    -0.271658, 0.271717,
    0.020400, -0.020369,
};

float Cg_init[2] = {
    -0.358903, -0.358909
};

float xstd_init[12] = {
    0.003613, 0.001414, 0.106133, 0.169382, 0.001270, 0.000389, 0.022892, 0.071866, 0.000500, 0.000074, 0.014221, 0.059682
};

float xmean_init[12] = {
    0.009690, -0.006248, 0.177239, 0.589524, 0.003048, -0.007760, 0.005651, 0.047524, 0.003087, -0.007814, 0.003365, 0.063953
};

