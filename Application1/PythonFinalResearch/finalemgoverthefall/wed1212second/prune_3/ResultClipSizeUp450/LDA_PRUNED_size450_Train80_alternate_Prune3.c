// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.27%
// test_accuracy: 75.00%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 17:00:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.006694, -0.006673,
    -0.093623, 0.093659,
    0.023125, -0.023134,
    -0.059534, 0.059502,
    1.341217, -1.341491,
    -1.168277, 1.168623,
    -0.241762, 0.241721,
    0.189336, -0.189388,
    -0.480592, 0.480637,
    -0.636953, 0.636922,
    0.307092, -0.307112,
    1.212673, -1.212670,
};

float Cg_init[2] = {
    -0.414492, -0.414558
};

float xstd_init[12] = {
    0.000854, 0.000078, 0.007646, 0.063544, 0.000767, 0.000136, 0.015002, 0.054548, 0.003469, 0.001033, 0.118980, 0.208832
};

float xmean_init[12] = {
    0.005490, -0.007760, 0.001724, 0.089569, 0.002396, -0.007846, 0.005172, 0.048707, 0.009056, -0.006617, 0.133391, 0.470517
};

