// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.70%
// test_accuracy: 71.69%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt']}
// generated: 2026-02-13 14:48:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.152351, 0.152032,
    -0.186910, 0.187601,
    0.035235, -0.035320,
    0.152277, -0.152614,
    1.560199, -1.560201,
    -1.081657, 1.081558,
    -0.089731, 0.089775,
    0.104789, -0.104759,
    -0.535789, 0.535863,
    -0.331488, 0.331400,
    0.550871, -0.550876,
    1.035059, -1.035086,
};

float Cg_init[2] = {
    -0.540297, -0.540311
};

float xstd_init[12] = {
    0.000911, 0.000073, 0.008516, 0.064999, 0.000684, 0.000106, 0.013824, 0.050109, 0.003187, 0.000998, 0.118753, 0.209964
};

float xmean_init[12] = {
    0.005545, -0.007757, 0.002353, 0.091658, 0.002345, -0.007858, 0.004278, 0.044064, 0.008827, -0.006613, 0.134296, 0.473155
};

