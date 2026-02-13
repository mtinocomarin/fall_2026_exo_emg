// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.64%
// test_accuracy: 73.44%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 17:01:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.098618, 0.098685,
    -0.147178, 0.147188,
    -0.023670, 0.023663,
    0.086888, -0.086906,
    1.467983, -1.468448,
    -1.183453, 1.184092,
    -0.117041, 0.116933,
    0.054546, -0.054668,
    -0.501941, 0.501971,
    -0.498666, 0.498638,
    0.390050, -0.390084,
    1.045728, -1.045702,
};

float Cg_init[2] = {
    -0.420433, -0.420552
};

float xstd_init[12] = {
    0.000877, 0.000074, 0.008130, 0.062740, 0.000718, 0.000119, 0.013588, 0.050588, 0.003386, 0.001016, 0.116828, 0.208668
};

float xmean_init[12] = {
    0.005494, -0.007761, 0.002058, 0.088642, 0.002368, -0.007854, 0.004444, 0.045000, 0.009017, -0.006607, 0.132387, 0.467778
};

