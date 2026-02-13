// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 69.76%
// test_accuracy: 53.68%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 13:45:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.393653, 0.393532,
    0.225362, -0.225042,
    -0.063980, 0.063945,
    -0.090520, 0.090339,
    -0.208944, 0.209004,
    -0.264973, 0.264968,
    -0.127178, 0.127153,
    0.313033, -0.313040,
    -0.462960, 0.463060,
    0.249176, -0.249399,
    0.051515, -0.051447,
    0.100499, -0.100436,
};

float Cg_init[2] = {
    -0.142857, -0.142849
};

float xstd_init[12] = {
    0.001040, 0.000083, 0.013019, 0.080620, 0.003228, 0.000877, 0.093521, 0.185930, 0.000871, 0.000113, 0.019869, 0.076967
};

float xmean_init[12] = {
    0.006546, -0.007683, 0.005145, 0.147718, 0.008513, -0.006865, 0.103028, 0.431389, 0.004349, -0.007714, 0.010886, 0.127953
};

