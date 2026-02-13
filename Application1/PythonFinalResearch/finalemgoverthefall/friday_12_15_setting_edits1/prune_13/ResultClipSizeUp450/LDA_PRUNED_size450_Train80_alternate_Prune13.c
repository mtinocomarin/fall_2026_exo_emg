// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.51%
// test_accuracy: 67.19%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt', 'act2\\trial_26.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-12 13:17:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.522216, 0.522285,
    -0.323731, 0.323713,
    0.847096, -0.847121,
    0.407204, -0.407216,
    -0.551975, 0.551923,
    0.060941, -0.060891,
    0.096359, -0.096370,
    0.158546, -0.158557,
    0.150182, -0.150487,
    -0.346392, 0.346860,
    -0.351449, 0.351294,
    0.500771, -0.500794,
};

float Cg_init[2] = {
    -0.419389, -0.419407
};

float xstd_init[12] = {
    0.004530, 0.001833, 0.341866, 0.127583, 0.001190, 0.000207, 0.054230, 0.138691, 0.000703, 0.000185, 0.060166, 0.137024
};

float xmean_init[12] = {
    0.010696, -0.005713, 0.455702, 1.031579, 0.003470, -0.007747, 0.016447, 0.617368, 0.003565, -0.007728, 0.018421, 0.705789
};

