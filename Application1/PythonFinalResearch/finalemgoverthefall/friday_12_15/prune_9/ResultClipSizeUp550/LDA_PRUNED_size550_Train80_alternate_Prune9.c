// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.96%
// test_accuracy: 73.12%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_14.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_26.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:44:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.757788, 0.757783,
    0.145818, -0.145801,
    0.316970, -0.316990,
    0.987728, -0.987713,
    -0.477961, 0.478243,
    0.198765, -0.199059,
    0.011772, -0.011798,
    -0.261544, 0.261571,
    0.217871, -0.217880,
    -0.133687, 0.133705,
    -0.570379, 0.570388,
    0.027572, -0.027605,
};

float Cg_init[2] = {
    -0.422972, -0.422976
};

float xstd_init[12] = {
    0.004328, 0.001835, 0.151493, 0.207167, 0.001246, 0.000214, 0.032943, 0.090888, 0.000707, 0.000180, 0.032049, 0.108674
};

float xmean_init[12] = {
    0.010493, -0.005669, 0.245740, 0.684521, 0.003490, -0.007746, 0.011362, 0.083826, 0.003561, -0.007723, 0.013507, 0.122609
};

