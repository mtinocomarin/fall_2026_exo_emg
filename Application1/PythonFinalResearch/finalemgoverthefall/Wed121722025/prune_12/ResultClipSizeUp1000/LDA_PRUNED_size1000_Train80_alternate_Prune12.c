// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.13%
// test_accuracy: 53.29%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-17 13:47:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.429209, 0.429036,
    0.271720, -0.271329,
    -0.029417, 0.029375,
    -0.061540, 0.061325,
    -0.285345, 0.285381,
    -0.241823, 0.241818,
    -0.219386, 0.219362,
    0.319517, -0.319509,
    -0.596345, 0.596433,
    0.340268, -0.340478,
    0.069744, -0.069671,
    0.166627, -0.166558,
};

float Cg_init[2] = {
    -0.203176, -0.203160
};

float xstd_init[12] = {
    0.001084, 0.000083, 0.013440, 0.081099, 0.003135, 0.000869, 0.089763, 0.182735, 0.000876, 0.000114, 0.020103, 0.076669
};

float xmean_init[12] = {
    0.006617, -0.007681, 0.005404, 0.149843, 0.008409, -0.006888, 0.098632, 0.428421, 0.004394, -0.007711, 0.010842, 0.129579
};

