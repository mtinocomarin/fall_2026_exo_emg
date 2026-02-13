// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.76%
// test_accuracy: 73.86%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_23.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_24.txt', 'act2\\trial_30.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 17:03:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.021223, 0.021052,
    -0.219850, 0.220239,
    0.006773, -0.006832,
    0.005569, -0.005753,
    1.726292, -1.726332,
    -1.462143, 1.462141,
    -0.172277, 0.172302,
    0.153760, -0.153745,
    -0.716145, 0.716106,
    -0.507414, 0.507468,
    0.453368, -0.453388,
    1.448849, -1.448880,
};

float Cg_init[2] = {
    -0.590883, -0.590910
};

float xstd_init[12] = {
    0.000918, 0.000079, 0.008020, 0.066160, 0.000771, 0.000130, 0.015355, 0.053772, 0.003509, 0.001067, 0.121003, 0.218565
};

float xmean_init[12] = {
    0.005533, -0.007757, 0.002161, 0.093123, 0.002422, -0.007846, 0.005375, 0.048221, 0.009250, -0.006516, 0.140554, 0.482134
};

