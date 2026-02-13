// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.16%
// test_accuracy: 73.21%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:48:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.001682, 1.001688,
    -0.165195, 0.165219,
    0.839902, -0.839936,
    0.714439, -0.714434,
    1.078816, -1.078864,
    -1.615997, 1.616054,
    0.077157, -0.077166,
    0.207142, -0.207142,
    -0.490447, 0.490474,
    0.750101, -0.750142,
    -0.641864, 0.641884,
    0.114426, -0.114422,
};

float Cg_init[2] = {
    -0.491651, -0.491670
};

float xstd_init[12] = {
    0.003640, 0.001374, 0.101733, 0.171239, 0.001703, 0.000520, 0.030892, 0.086997, 0.001221, 0.000095, 0.019187, 0.066958
};

float xmean_init[12] = {
    0.009740, -0.006254, 0.168132, 0.575604, 0.003273, -0.007708, 0.008132, 0.053407, 0.003249, -0.007803, 0.005055, 0.069341
};

