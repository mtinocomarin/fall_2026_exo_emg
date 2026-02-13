// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_11\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.27%
// test_accuracy: 73.61%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_30.txt', 'act1\\trial_11.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-17 17:04:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.029648, 0.029575,
    -0.349002, 0.349130,
    0.041661, -0.041678,
    -0.038584, 0.038518,
    2.245877, -2.245725,
    -2.122588, 2.122363,
    -0.103497, 0.103539,
    0.361527, -0.361477,
    -0.701587, 0.701532,
    -0.607832, 0.607894,
    0.270386, -0.270404,
    1.711402, -1.711398,
};

float Cg_init[2] = {
    -0.733494, -0.733451
};

float xstd_init[12] = {
    0.000942, 0.000085, 0.008197, 0.068532, 0.000798, 0.000134, 0.015995, 0.058044, 0.003489, 0.001012, 0.115791, 0.210364
};

float xmean_init[12] = {
    0.005577, -0.007754, 0.002116, 0.095027, 0.002428, -0.007845, 0.005714, 0.051111, 0.009131, -0.006585, 0.135662, 0.473228
};

