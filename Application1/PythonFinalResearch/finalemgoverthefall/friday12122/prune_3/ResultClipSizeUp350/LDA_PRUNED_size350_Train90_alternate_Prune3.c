// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.06%
// test_accuracy: 77.08%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 16:03:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.770698, 0.770715,
    -0.177744, 0.177871,
    0.400960, -0.400978,
    0.722401, -0.722455,
    0.873361, -0.873506,
    -1.151905, 1.152097,
    0.127077, -0.127130,
    -0.004911, 0.004899,
    -0.245137, 0.245351,
    0.416244, -0.416966,
    -0.420440, 0.420687,
    0.171368, -0.171023,
};

float Cg_init[2] = {
    -0.337031, -0.337091
};

float xstd_init[12] = {
    0.003775, 0.001386, 0.100685, 0.169370, 0.001653, 0.000504, 0.030914, 0.084014, 0.000966, 0.000087, 0.018381, 0.065053
};

float xmean_init[12] = {
    0.009890, -0.006246, 0.169563, 0.574646, 0.003254, -0.007707, 0.007946, 0.050909, 0.003183, -0.007810, 0.004512, 0.064142
};

