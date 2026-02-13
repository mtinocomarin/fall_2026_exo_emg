// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.18%
// test_accuracy: 52.68%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:44:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.503281, 0.503323,
    0.355888, -0.356003,
    0.222056, -0.222031,
    -0.258269, 0.258329,
    -0.500306, 0.500405,
    -0.198540, 0.198446,
    0.258768, -0.258782,
    0.155544, -0.155563,
    -0.704341, 0.704258,
    0.351712, -0.351520,
    -0.151807, 0.151748,
    0.274563, -0.274631,
};

float Cg_init[2] = {
    -0.238592, -0.238593
};

float xstd_init[12] = {
    0.001033, 0.000082, 0.010777, 0.078555, 0.002918, 0.000810, 0.084822, 0.173655, 0.000862, 0.000111, 0.017087, 0.073831
};

float xmean_init[12] = {
    0.006466, -0.007687, 0.003883, 0.142088, 0.008679, -0.006855, 0.103443, 0.449451, 0.004330, -0.007719, 0.008498, 0.126044
};

