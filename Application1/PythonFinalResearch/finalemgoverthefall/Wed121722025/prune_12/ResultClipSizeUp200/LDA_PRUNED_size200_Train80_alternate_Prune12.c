// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.67%
// test_accuracy: 60.42%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 13:47:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.712514, 0.712529,
    0.003136, -0.003174,
    0.225866, -0.225862,
    0.243192, -0.243172,
    -0.950305, 0.950278,
    0.035439, -0.035418,
    0.410795, -0.410793,
    0.022409, -0.022400,
    -1.153457, 1.153467,
    0.325730, -0.325764,
    -0.458186, 0.458197,
    0.923930, -0.923920,
};

float Cg_init[2] = {
    -0.483611, -0.483606
};

float xstd_init[12] = {
    0.001034, 0.000079, 0.010746, 0.079814, 0.002423, 0.000671, 0.076192, 0.159199, 0.000967, 0.000126, 0.020999, 0.078094
};

float xmean_init[12] = {
    0.006474, -0.007689, 0.004667, 0.141667, 0.008637, -0.006902, 0.100444, 0.450333, 0.004372, -0.007715, 0.012222, 0.137667
};

