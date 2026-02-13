// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.39%
// test_accuracy: 81.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 16:06:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.001145, 1.001135,
    0.051055, -0.051074,
    0.583027, -0.583039,
    0.706391, -0.706366,
    1.064984, -1.065082,
    -1.469288, 1.469424,
    0.349425, -0.349446,
    -0.297614, 0.297611,
    1.039331, -1.039399,
    -0.481080, 0.481283,
    -0.428237, 0.428178,
    0.283525, -0.283604,
};

float Cg_init[2] = {
    -0.654084, -0.654104
};

float xstd_init[12] = {
    0.003904, 0.001427, 0.097869, 0.170879, 0.001763, 0.000545, 0.033907, 0.090031, 0.000570, 0.000094, 0.019525, 0.068962
};

float xmean_init[12] = {
    0.009964, -0.006216, 0.165714, 0.571428, 0.003345, -0.007677, 0.009167, 0.054464, 0.003149, -0.007807, 0.004524, 0.066071
};

