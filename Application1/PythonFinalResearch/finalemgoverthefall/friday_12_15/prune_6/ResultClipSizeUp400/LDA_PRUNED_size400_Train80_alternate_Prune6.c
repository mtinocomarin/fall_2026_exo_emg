// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.62%
// test_accuracy: 77.68%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 12:42:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.138701, 1.138705,
    0.267474, -0.267449,
    0.366029, -0.366054,
    1.015826, -1.015816,
    -0.313554, 0.313527,
    0.004664, -0.004648,
    -0.082497, 0.082502,
    -0.048179, 0.048179,
    -0.029902, 0.029843,
    0.129875, -0.129750,
    -0.520165, 0.520139,
    -0.138392, 0.138341,
};

float Cg_init[2] = {
    -0.443845, -0.443848
};

float xstd_init[12] = {
    0.004567, 0.001966, 0.145908, 0.199874, 0.001337, 0.000243, 0.033899, 0.096006, 0.000687, 0.000165, 0.029312, 0.104368
};

float xmean_init[12] = {
    0.010814, -0.005596, 0.247473, 0.688242, 0.003538, -0.007734, 0.012454, 0.084615, 0.003554, -0.007727, 0.014212, 0.122748
};

