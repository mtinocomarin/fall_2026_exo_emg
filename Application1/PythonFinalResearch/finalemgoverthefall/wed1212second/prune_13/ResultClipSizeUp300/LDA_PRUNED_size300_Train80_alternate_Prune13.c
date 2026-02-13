// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 94.74%
// test_accuracy: 78.75%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_11.txt', 'act1\\trial_19.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_19.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_27.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 17:05:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.095549, -0.095337,
    -0.180070, 0.179463,
    -0.060785, 0.060881,
    -0.218625, 0.218978,
    2.454164, -2.453844,
    -2.202060, 2.201653,
    -0.342763, 0.342815,
    0.319288, -0.319243,
    -0.929402, 0.929394,
    -0.266683, 0.266808,
    -0.012425, 0.012303,
    2.120659, -2.120629,
};

float Cg_init[2] = {
    -0.916067, -0.915987
};

float xstd_init[12] = {
    0.000908, 0.000066, 0.008054, 0.073519, 0.000774, 0.000134, 0.016927, 0.061528, 0.003260, 0.000971, 0.115387, 0.220595
};

float xmean_init[12] = {
    0.005720, -0.007754, 0.001684, 0.097053, 0.002421, -0.007840, 0.005754, 0.055579, 0.008767, -0.006677, 0.125754, 0.465263
};

