// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.00%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt', 'act1\\trial_5.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt']}
// generated: 2026-02-13 17:10:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.375089, 1.375089,
    -0.015019, 0.014806,
    0.000000, 0.000000,
    -0.401169, -0.401169,
    -1.046903, -1.046903,
    -0.566553, -0.566553,
    -0.566021, -0.566021,
    -0.206692, -0.206692,
    0.753398, 0.753398,
    1.587419, 1.587419,
    -0.379613, -0.379613,
    0.509258, 0.509258,
};

float Cg_init[2] = {
    -1.575066, 0.458879
};

float xstd_init[12] = {
    0.000323, 0.000017, 1.000000, 0.019255, 0.001882, 0.000678, 0.073578, 0.125671, 0.002017, 0.000675, 0.075871, 0.180884
};

float xmean_init[12] = {
    0.002483, -0.007916, 0.000000, 0.009778, 0.008561, -0.006551, 0.154074, 0.473333, 0.006657, -0.006948, 0.104593, 0.373334
};

