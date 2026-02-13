// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.88%
// test_accuracy: 70.59%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:49:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.716124, 0.716132,
    -0.212399, 0.212410,
    0.576173, -0.576215,
    0.559991, -0.559971,
    0.802249, -0.802331,
    -0.759663, 0.759789,
    -0.139001, 0.138969,
    -0.048589, 0.048569,
    -0.513595, 0.513635,
    0.572853, -0.572857,
    -0.364985, 0.364994,
    0.017582, -0.017603,
};

float Cg_init[2] = {
    -0.311093, -0.311111
};

float xstd_init[12] = {
    0.003263, 0.001253, 0.103971, 0.167764, 0.001283, 0.000359, 0.018370, 0.068549, 0.001502, 0.000082, 0.014295, 0.065040
};

float xmean_init[12] = {
    0.009550, -0.006311, 0.173993, 0.585177, 0.003079, -0.007767, 0.004675, 0.047953, 0.003207, -0.007811, 0.003545, 0.066118
};

