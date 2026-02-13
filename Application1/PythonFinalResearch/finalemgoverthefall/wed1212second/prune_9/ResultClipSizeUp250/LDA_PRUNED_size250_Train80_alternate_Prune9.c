// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.85%
// test_accuracy: 71.88%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:03:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.262472, -0.262626,
    0.281612, -0.281262,
    -0.161631, 0.161562,
    -0.548388, 0.548207,
    1.723762, -1.723694,
    -1.560440, 1.560327,
    -0.321235, 0.321262,
    0.334289, -0.334257,
    -0.819904, 0.819903,
    -0.756688, 0.756632,
    0.510140, -0.510120,
    2.052346, -2.052319,
};

float Cg_init[2] = {
    -0.841372, -0.841318
};

float xstd_init[12] = {
    0.000918, 0.000066, 0.008236, 0.068493, 0.000813, 0.000142, 0.016065, 0.059953, 0.003139, 0.000917, 0.117119, 0.214490
};

float xmean_init[12] = {
    0.005591, -0.007760, 0.001449, 0.091956, 0.002395, -0.007845, 0.006087, 0.053478, 0.008976, -0.006621, 0.140435, 0.480870
};

