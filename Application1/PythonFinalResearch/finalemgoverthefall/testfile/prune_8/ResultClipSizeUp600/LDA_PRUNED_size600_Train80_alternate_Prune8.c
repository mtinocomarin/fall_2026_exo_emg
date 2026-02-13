// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.31%
// test_accuracy: 74.43%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2026-02-13 14:47:05
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.012648, 0.012448,
    -0.205887, 0.206388,
    0.020701, -0.020779,
    -0.044599, 0.044369,
    1.723877, -1.724059,
    -1.446695, 1.446873,
    -0.149344, 0.149343,
    0.111168, -0.111181,
    -0.733842, 0.733833,
    -0.437845, 0.437860,
    0.390582, -0.390597,
    1.355374, -1.355409,
};

float Cg_init[2] = {
    -0.544436, -0.544502
};

float xstd_init[12] = {
    0.000902, 0.000078, 0.007863, 0.065544, 0.000758, 0.000128, 0.015070, 0.053342, 0.003525, 0.001064, 0.120464, 0.216018
};

float xmean_init[12] = {
    0.005529, -0.007757, 0.002071, 0.093258, 0.002409, -0.007848, 0.005152, 0.047349, 0.009263, -0.006523, 0.140354, 0.481894
};

