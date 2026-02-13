// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.30%
// test_accuracy: 80.56%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:05:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.773243, 0.773194,
    -0.135837, 0.135887,
    0.422061, -0.422072,
    0.751018, -0.751013,
    0.825611, -0.825374,
    -1.072754, 1.072444,
    0.033636, -0.033586,
    0.019732, -0.019705,
    -0.467192, 0.467124,
    0.487839, -0.487836,
    -0.466110, 0.466116,
    0.208278, -0.208285,
};

float Cg_init[2] = {
    -0.360602, -0.360584
};

float xstd_init[12] = {
    0.003671, 0.001387, 0.102393, 0.165751, 0.001615, 0.000481, 0.027557, 0.079974, 0.001524, 0.000090, 0.016892, 0.066303
};

float xmean_init[12] = {
    0.009856, -0.006243, 0.167457, 0.582371, 0.003230, -0.007717, 0.007111, 0.051852, 0.003241, -0.007807, 0.004691, 0.068445
};

