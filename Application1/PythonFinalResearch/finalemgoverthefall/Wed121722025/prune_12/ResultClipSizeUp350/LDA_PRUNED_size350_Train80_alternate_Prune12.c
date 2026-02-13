// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.83%
// test_accuracy: 58.33%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_12.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-17 13:47:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.932473, 0.932412,
    0.123253, -0.123097,
    0.183857, -0.183873,
    0.044751, -0.044843,
    -0.662353, 0.662367,
    -0.141807, 0.141817,
    0.417696, -0.417706,
    -0.087070, 0.087059,
    -1.219681, 1.219639,
    0.636777, -0.636706,
    -0.309566, 0.309551,
    0.422603, -0.422624,
};

float Cg_init[2] = {
    -0.486483, -0.486470
};

float xstd_init[12] = {
    0.001026, 0.000080, 0.011614, 0.081196, 0.002883, 0.000804, 0.082124, 0.169694, 0.000906, 0.000125, 0.017554, 0.073865
};

float xmean_init[12] = {
    0.006482, -0.007684, 0.004444, 0.142833, 0.008714, -0.006840, 0.103555, 0.450833, 0.004351, -0.007717, 0.008333, 0.130000
};

