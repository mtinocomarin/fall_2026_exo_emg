// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.00%
// test_accuracy: 81.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:52:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.163436, 1.163433,
    -0.716145, 0.716131,
    2.101349, -2.101345,
    0.353446, -0.353439,
    3.063707, -3.063761,
    -3.043152, 3.043231,
    -0.109038, 0.109017,
    0.007224, -0.007225,
    1.776020, -1.776028,
    -1.336204, 1.336261,
    -0.719023, 0.719007,
    0.956325, -0.956351,
};

float Cg_init[2] = {
    -1.466169, -1.466172
};

float xstd_init[12] = {
    0.003486, 0.001217, 0.099397, 0.165043, 0.001681, 0.000545, 0.029859, 0.084469, 0.000561, 0.000110, 0.020039, 0.067525
};

float xmean_init[12] = {
    0.009780, -0.006230, 0.164000, 0.571000, 0.003279, -0.007701, 0.008000, 0.053333, 0.003221, -0.007793, 0.005333, 0.075000
};

