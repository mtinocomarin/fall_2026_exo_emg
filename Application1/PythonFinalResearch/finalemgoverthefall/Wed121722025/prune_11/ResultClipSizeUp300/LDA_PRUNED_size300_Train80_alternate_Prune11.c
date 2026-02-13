// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.24%
// test_accuracy: 55.00%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 13:46:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.901039, 0.900964,
    0.438587, -0.438430,
    0.322348, -0.322369,
    -0.098170, 0.098092,
    -0.771684, 0.771657,
    -0.390051, 0.390061,
    0.539726, -0.539702,
    0.253091, -0.253086,
    -1.113763, 1.113764,
    0.400598, -0.400620,
    -0.275462, 0.275476,
    0.579039, -0.579028,
};

float Cg_init[2] = {
    -0.445870, -0.445851
};

float xstd_init[12] = {
    0.001056, 0.000083, 0.011345, 0.081813, 0.002608, 0.000773, 0.083817, 0.167949, 0.000941, 0.000121, 0.018723, 0.077505
};

float xmean_init[12] = {
    0.006520, -0.007685, 0.004571, 0.141143, 0.008705, -0.006851, 0.104635, 0.460000, 0.004355, -0.007714, 0.009905, 0.133333
};

