// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_4\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 83.33%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-17 12:37:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.195588, 1.195598,
    0.299592, -0.299587,
    0.562380, -0.562390,
    0.942789, -0.942773,
    -0.131785, 0.131869,
    0.028372, -0.028508,
    0.140886, -0.140879,
    -0.582286, 0.582330,
    0.185723, -0.185805,
    -0.448512, 0.448677,
    -0.464094, 0.464064,
    0.034419, -0.034489,
};

float Cg_init[2] = {
    -0.559713, -0.559723
};

float xstd_init[12] = {
    0.004238, 0.001823, 0.135981, 0.177217, 0.001526, 0.000281, 0.037483, 0.100426, 0.000668, 0.000156, 0.024353, 0.102859
};

float xmean_init[12] = {
    0.010805, -0.005673, 0.246349, 0.706190, 0.003634, -0.007717, 0.012857, 0.086429, 0.003552, -0.007734, 0.011587, 0.122619
};

