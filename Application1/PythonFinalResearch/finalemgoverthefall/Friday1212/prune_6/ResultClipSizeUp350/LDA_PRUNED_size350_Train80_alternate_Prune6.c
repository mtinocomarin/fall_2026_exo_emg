// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.29%
// test_accuracy: 73.96%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt']}
// generated: 2025-12-12 15:48:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.901207, 0.901212,
    -0.264971, 0.265012,
    0.637335, -0.637355,
    0.864632, -0.864639,
    0.963672, -0.963739,
    -1.326205, 1.326299,
    0.164872, -0.164900,
    -0.003507, 0.003507,
    -0.357821, 0.357891,
    0.515367, -0.515585,
    -0.499930, 0.500007,
    0.146139, -0.146038,
};

float Cg_init[2] = {
    -0.455163, -0.455183
};

float xstd_init[12] = {
    0.003785, 0.001397, 0.098245, 0.172426, 0.001717, 0.000520, 0.033518, 0.089035, 0.001048, 0.000092, 0.020165, 0.064875
};

float xmean_init[12] = {
    0.009779, -0.006264, 0.164701, 0.570641, 0.003276, -0.007708, 0.008889, 0.051795, 0.003216, -0.007805, 0.005043, 0.067821
};

