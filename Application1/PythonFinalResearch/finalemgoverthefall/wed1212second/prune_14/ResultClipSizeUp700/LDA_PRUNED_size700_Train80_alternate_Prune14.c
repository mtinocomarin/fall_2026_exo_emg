// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.09%
// test_accuracy: 72.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_26.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:06:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.264422, 0.264302,
    -0.284597, 0.284799,
    0.009262, -0.009290,
    0.049137, -0.049241,
    2.394712, -2.394558,
    -1.786471, 1.786224,
    0.022173, -0.022107,
    0.283196, -0.283130,
    -1.250116, 1.250094,
    -0.023777, 0.023811,
    0.526130, -0.526148,
    1.681179, -1.681172,
};

float Cg_init[2] = {
    -0.911487, -0.911431
};

float xstd_init[12] = {
    0.000948, 0.000081, 0.009323, 0.067680, 0.000691, 0.000101, 0.015248, 0.053844, 0.003509, 0.001080, 0.125459, 0.221986
};

float xmean_init[12] = {
    0.005696, -0.007745, 0.002735, 0.100428, 0.002403, -0.007850, 0.005128, 0.050427, 0.009134, -0.006503, 0.147237, 0.486410
};

