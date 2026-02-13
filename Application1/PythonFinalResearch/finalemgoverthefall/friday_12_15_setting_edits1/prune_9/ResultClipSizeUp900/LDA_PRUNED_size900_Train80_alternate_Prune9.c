// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.18%
// test_accuracy: 69.12%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt']}
// generated: 2025-12-12 13:15:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.701390, 0.701388,
    0.121044, -0.121025,
    0.803595, -0.803613,
    0.247341, -0.247337,
    -0.585849, 0.585789,
    0.288768, -0.288702,
    0.027109, -0.027111,
    0.188975, -0.188978,
    0.276205, -0.276232,
    -0.326742, 0.326798,
    -0.338380, 0.338362,
    0.397552, -0.397566,
};

float Cg_init[2] = {
    -0.309807, -0.309811
};

float xstd_init[12] = {
    0.003949, 0.001712, 0.343934, 0.122351, 0.001010, 0.000180, 0.046565, 0.129843, 0.000648, 0.000157, 0.048866, 0.138400
};

float xmean_init[12] = {
    0.010239, -0.005775, 0.445695, 1.042813, 0.003357, -0.007767, 0.010656, 0.620358, 0.003513, -0.007736, 0.014578, 0.697289
};

