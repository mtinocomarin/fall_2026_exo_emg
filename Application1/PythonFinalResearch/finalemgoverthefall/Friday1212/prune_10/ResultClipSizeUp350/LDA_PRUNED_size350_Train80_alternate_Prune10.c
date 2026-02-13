// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.02%
// test_accuracy: 72.92%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-12 15:51:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.182946, 1.182926,
    -0.195528, 0.195536,
    0.662409, -0.662427,
    1.061335, -1.061316,
    1.210673, -1.210764,
    -1.511213, 1.511345,
    0.227534, -0.227556,
    -0.073376, 0.073358,
    -0.455503, 0.455492,
    0.614026, -0.613906,
    -0.630900, 0.630860,
    0.259219, -0.259281,
};

float Cg_init[2] = {
    -0.562941, -0.562946
};

float xstd_init[12] = {
    0.003933, 0.001481, 0.103739, 0.177043, 0.001747, 0.000533, 0.033895, 0.091116, 0.001117, 0.000097, 0.021803, 0.067384
};

float xmean_init[12] = {
    0.009928, -0.006215, 0.168182, 0.574091, 0.003296, -0.007710, 0.008384, 0.053333, 0.003284, -0.007799, 0.005960, 0.070909
};

