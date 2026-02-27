// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.75%
// test_accuracy: 56.25%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_8.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.634223, 0.634227,
    -0.239856, 0.239712,
    0.000000, 0.000000,
    -0.402937, -0.402937,
    1.065924, 1.065924,
    1.001136, 1.001136,
    2.311914, 2.311914,
    1.539759, 1.539759,
    -0.538128, -0.538128,
    -0.781274, -0.781274,
    -1.204838, -1.204838,
    -0.412569, -0.412569,
};

float Cg_init[2] = {
    0.566344, -1.009607
};

float xstd_init[12] = {
    0.000276, 0.000015, 1.000000, 0.008078, 0.002154, 0.000589, 0.073646, 0.133430, 0.002123, 0.000511, 0.068484, 0.202173
};

float xmean_init[12] = {
    0.002725, -0.007910, 0.000000, 0.001667, 0.007767, -0.006813, 0.127222, 0.425833, 0.005872, -0.007186, 0.083889, 0.313333
};

