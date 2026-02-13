// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.08%
// test_accuracy: 77.68%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-12 12:47:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.466794, 1.466809,
    0.517388, -0.517396,
    0.559070, -0.559090,
    1.540120, -1.540106,
    -0.825472, 0.825548,
    0.259399, -0.259483,
    -0.228017, 0.228020,
    0.126735, -0.126732,
    0.507896, -0.507896,
    -0.545197, 0.545166,
    -0.415546, 0.415562,
    0.108835, -0.108830,
};

float Cg_init[2] = {
    -0.785883, -0.785890
};

float xstd_init[12] = {
    0.004459, 0.001926, 0.153083, 0.211513, 0.001418, 0.000271, 0.032151, 0.100599, 0.000657, 0.000159, 0.027222, 0.095188
};

float xmean_init[12] = {
    0.010804, -0.005596, 0.248784, 0.689682, 0.003649, -0.007715, 0.013968, 0.087302, 0.003543, -0.007736, 0.011323, 0.114603
};

