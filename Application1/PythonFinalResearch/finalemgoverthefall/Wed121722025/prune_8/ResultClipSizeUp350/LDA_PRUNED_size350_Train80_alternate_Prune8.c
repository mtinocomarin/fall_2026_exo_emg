// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.94%
// test_accuracy: 57.29%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:45:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.790030, 0.789996,
    0.250276, -0.250179,
    0.212610, -0.212620,
    -0.015150, 0.015090,
    -0.571967, 0.571945,
    -0.106197, 0.106220,
    0.295042, -0.295033,
    -0.046866, 0.046866,
    -0.876899, 0.876905,
    0.395150, -0.395150,
    -0.139443, 0.139446,
    0.386623, -0.386633,
};

float Cg_init[2] = {
    -0.339646, -0.339642
};

float xstd_init[12] = {
    0.001044, 0.000082, 0.011917, 0.081443, 0.002849, 0.000787, 0.079940, 0.168878, 0.000893, 0.000119, 0.017876, 0.072710
};

float xmean_init[12] = {
    0.006409, -0.007690, 0.004630, 0.141111, 0.008666, -0.006853, 0.101481, 0.447917, 0.004397, -0.007714, 0.008611, 0.131945
};

