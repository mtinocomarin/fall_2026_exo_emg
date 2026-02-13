// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 72.92%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 17:05:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.170347, -0.170402,
    -0.163931, 0.164079,
    -0.093188, 0.093160,
    -0.078110, 0.078044,
    2.109189, -2.109290,
    -1.831606, 1.831716,
    -0.320581, 0.320571,
    0.173124, -0.173127,
    -0.578163, 0.578178,
    -1.181012, 1.180977,
    0.346518, -0.346486,
    2.216371, -2.216395,
};

float Cg_init[2] = {
    -0.854165, -0.854190
};

float xstd_init[12] = {
    0.000877, 0.000083, 0.008414, 0.066731, 0.000836, 0.000148, 0.016011, 0.060991, 0.003339, 0.000969, 0.116340, 0.210219
};

float xmean_init[12] = {
    0.005595, -0.007758, 0.001889, 0.091500, 0.002437, -0.007840, 0.005667, 0.053500, 0.008831, -0.006680, 0.124555, 0.464334
};

