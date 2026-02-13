// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.21%
// test_accuracy: 66.45%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 12:38:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.612579, 0.612644,
    0.164181, -0.164224,
    0.415855, -0.415889,
    0.392286, -0.392281,
    -0.398576, 0.398399,
    0.238048, -0.237805,
    -0.074937, 0.074921,
    0.019509, -0.019574,
    0.223271, -0.223212,
    -0.047537, 0.047531,
    -0.406642, 0.406635,
    -0.029093, 0.029057,
};

float Cg_init[2] = {
    -0.176839, -0.176839
};

float xstd_init[12] = {
    0.003801, 0.001654, 0.147895, 0.202873, 0.000905, 0.000161, 0.023068, 0.074722, 0.000628, 0.000152, 0.028564, 0.099771
};

float xmean_init[12] = {
    0.009942, -0.005890, 0.238447, 0.679549, 0.003282, -0.007780, 0.006867, 0.070000, 0.003482, -0.007744, 0.012080, 0.111279
};

