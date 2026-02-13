// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.19%
// test_accuracy: 77.34%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 12:40:26
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.005611, 1.005607,
    0.220279, -0.220260,
    0.109325, -0.109355,
    0.903352, -0.903328,
    -0.404499, 0.404427,
    0.142327, -0.142238,
    -0.005894, 0.005901,
    -0.091531, 0.091505,
    0.138057, -0.138060,
    -0.043217, 0.043227,
    -0.510922, 0.510930,
    0.105689, -0.105706,
};

float Cg_init[2] = {
    -0.313469, -0.313468
};

float xstd_init[12] = {
    0.004674, 0.002089, 0.147159, 0.202903, 0.001248, 0.000219, 0.032135, 0.091679, 0.000683, 0.000167, 0.030150, 0.103773
};

float xmean_init[12] = {
    0.010642, -0.005609, 0.241207, 0.678621, 0.003468, -0.007747, 0.010977, 0.081638, 0.003531, -0.007733, 0.012874, 0.115949
};

