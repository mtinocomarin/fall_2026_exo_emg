// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.46%
// test_accuracy: 53.57%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:42:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.375181, 0.375176,
    0.238377, -0.238380,
    0.159479, -0.159471,
    -0.152424, 0.152427,
    -0.404510, 0.404554,
    -0.175300, 0.175267,
    0.166475, -0.166488,
    0.185853, -0.185869,
    -0.417113, 0.417048,
    0.122419, -0.122264,
    -0.047387, 0.047343,
    0.222293, -0.222357,
};

float Cg_init[2] = {
    -0.146114, -0.146112
};

float xstd_init[12] = {
    0.001012, 0.000081, 0.011128, 0.080234, 0.002808, 0.000781, 0.082121, 0.171020, 0.000849, 0.000109, 0.017865, 0.072370
};

float xmean_init[12] = {
    0.006406, -0.007691, 0.004072, 0.139902, 0.008706, -0.006844, 0.104302, 0.452020, 0.004319, -0.007719, 0.008801, 0.125715
};

